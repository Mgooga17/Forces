﻿using Forces.Application.Interfaces.Repositories;
using Forces.Application.Models;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Forces.Infrastructure.Repositories
{
    public class InventoryItemRepository : IInventoryItemRepository
    {
        private readonly IRepositoryAsync<InventoryItem, int> _repository;

        public InventoryItemRepository(IRepositoryAsync<InventoryItem, int> repository)
        {
            _repository = repository;
        }

        public async Task<InventoryItem> Add(InventoryItem InventoryItem)
        {
            return await _repository.AddAsync(InventoryItem);
        }

        public async Task<InventoryItem> Delete(InventoryItem InventoryItem)
        {
            await _repository.DeleteAsync(InventoryItem);

            return InventoryItem;
        }

        public Task<List<InventoryItem>> GetAll()
        {
            return _repository.GetAllAsync();
        }

        public Task<InventoryItem> GetById(int Id)
        {
            return _repository.GetByIdAsync(Id);
        }

        public async Task<InventoryItem> Update(InventoryItem InventoryItem)
        {
            await _repository.UpdateAsync(InventoryItem);

            return InventoryItem;
        }
        public async Task<List<InventoryItem>> GetByArName(string ArName)
        {
            return await _repository.Entities.Include(x => x.MeasureUnit).Where(x => x.ItemArName == ArName).ToListAsync();
        }

        public async Task<InventoryItem> GetByCode(string Code)
        {
            return await _repository.Entities.Include(x => x.MeasureUnit).FirstOrDefaultAsync(x => x.ItemCode == Code);
        }

        public async Task<List<InventoryItem>> GetByName(string Name)
        {
            return await _repository.Entities.Include(x => x.MeasureUnit).Where(x => x.ItemName == Name).ToListAsync();
        }

        public async Task<InventoryItem> GetByNSN(string NSNCode)
        {
            return await _repository.Entities.Include(x => x.MeasureUnit).FirstOrDefaultAsync(x => x.ItemNsn == NSNCode);
        }

        public async Task<List<MeasureUnits>> GetMeasureUnitsByArName(string ItemName)
        {
            return await _repository.Entities.Include(x => x.MeasureUnit).Where(x => x.ItemArName == ItemName).Select(x => x.MeasureUnit).ToListAsync();
        }

        public async Task<List<MeasureUnits>> GetMeasureUnitsByName(string ItemName)
        {
            return await _repository.Entities.Include(x => x.MeasureUnit).Where(x => x.ItemName == ItemName).Select(x => x.MeasureUnit).ToListAsync();
        }

        public async Task<bool> IsArNameExist(string ItemName, int MeasureUnitID)
        {
            if (ItemName == null)
            {
                return await Task.FromResult<bool>(false);
            }
            return await _repository.Entities.AnyAsync(x => x.ItemArName == ItemName && x.MeasureUnitId == MeasureUnitID);
        }

        public async Task<bool> IsCodeExist(string ItemCode)
        {
            return await _repository.Entities.AnyAsync(x => x.ItemCode == ItemCode);
        }

        public async Task<bool> IsNameExist(string ItemName, int MeasureUnitID)
        {
            return await _repository.Entities.AnyAsync(x => x.ItemName == ItemName && x.MeasureUnitId == MeasureUnitID);
        }

        public async Task<bool> IsNsnExist(string ItemNsn)
        {
            return await _repository.Entities.AnyAsync(x => x.ItemNsn == ItemNsn);
        }
    }
}

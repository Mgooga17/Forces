﻿using Forces.Application.Interfaces.Chat;
using Forces.Application.Interfaces.Services;
using Forces.Application.Models.Chat;
using Forces.Shared.Constants.Permission;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using System;
using System.Threading.Tasks;

namespace Forces.Server.Controllers.Communication
{
    // [Authorize(Policy = Permissions.Communication.Chat)]
    [Route("api/[controller]")]
    [ApiController]
    public class ChatsController : ControllerBase
    {
        private readonly ICurrentUserService _currentUserService;
        private readonly IChatService _chatService;

        public ChatsController(ICurrentUserService currentUserService, IChatService chatService)
        {
            _currentUserService = currentUserService;
            _chatService = chatService;
        }

        /// <summary>
        /// Get user wise chat history
        /// </summary>
        /// <param name="contactId"></param>
        /// <returns>Status 200 OK</returns>
        //Get user wise chat history
        [HttpGet("{contactId}")]
        public async Task<IActionResult> GetChatHistoryAsync(string contactId)
        {
            return Ok(await _chatService.GetChatHistoryAsync(_currentUserService.UserId, contactId));
        }
        /// <summary>
        /// get available users
        /// </summary>
        /// <returns>Status 200 OK</returns>
        //get available users - sorted by date of last message if exists
        [HttpGet("users")]
        public async Task<IActionResult> GetChatUsersAsync()
        {
            return Ok(await _chatService.GetChatUsersAsync(_currentUserService.UserId));
        }

        /// <summary>
        /// get available users
        /// </summary>
        /// <returns>Status 200 OK</returns>
        //get available users  
        [HttpGet("Ousers")]
        public async Task<IActionResult> GetChatOUsersAsync()
        {
            return Ok(await _chatService.GetChatOUsersAsync(_currentUserService.UserId));
        }

        /// <summary>
        /// get available users
        /// </summary>
        /// <returns>Status 200 OK</returns>
        //get available users - sorted by date of last message if exists
        [HttpGet("chatusers")]
        public async Task<IActionResult> GetAllChatsByUserAsync()
        {
            return Ok(await _chatService.GetAllChatsByUserAsync(_currentUserService.UserId));
        }
        /// <summary>
        /// get available users
        /// </summary>
        /// <returns>Status 200 OK</returns>
        // Mark Message As Read To Spicefic User
        [HttpGet("MarkAsRead/{id}")]
        public async Task<IActionResult> MarkMessageAsRead(string id)
        {
            return Ok(await _chatService.MarkMessageAsRead(_currentUserService.UserId, id));
        }
        /// <summary>
        /// get available users
        /// </summary>
        /// <returns>Status 200 OK</returns>
        //Mark All As Read
        [HttpGet("markallasread")]
        public async Task<IActionResult> MarkAllMessageAsRead()
        {
            return Ok(await _chatService.MarkAllMessageAsRead(_currentUserService.UserId));
        }
        /// <summary>
        /// get available users
        /// </summary>
        /// <returns>Status 200 OK</returns>
        //Mark All As Seen
        [HttpGet("markAllAsSeen")]
        public async Task<IActionResult> MarkAllMessageAsSeen()
        {
            return Ok(await _chatService.MarkAllMessageAsSeen(_currentUserService.UserId));
        }
        /// <summary>
        /// Save Chat Message
        /// </summary>
        /// <param name="message"></param>
        /// <returns>Status 200 OK</returns>
        //save chat message
        [HttpPost]
        public async Task<IActionResult> SaveMessageAsync(ChatHistory<IChatUser> message)
        {
            message.FromUserId = _currentUserService.UserId;
            message.ToUserId = message.ToUserId;
            message.CreatedDate = DateTime.Now;
            return Ok(await _chatService.SaveMessageAsync(message));
        }


    }
}
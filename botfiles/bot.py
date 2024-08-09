#!/usr/bin/env python3

import os
import telebot

BOT_TOKEN = os.getenv('BOT_TOKEN')

bot = telebot.TeleBot(BOT_TOKEN)


@bot.message_handler(commands=['start', 'hello'])
def send_welcome(message):
    bot.reply_to(message, "Oga mi, Showa?")


@bot.message_handler(func=lambda msg: True)
def echo_all(message):
    bot.reply_to(message, message.text)


bot.polling()

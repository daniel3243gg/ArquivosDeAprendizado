import discord
from discord.ext import commands
intents = discord.Intents.default()
bot = commands.Bot(command_prefix='!', intents=intents)


@bot.event
async def on_ready():
    print(f'estou online como {bot.user}')

@bot.event
async def on_message(message):
    if message.author == bot.user:
        return
    if 'palavrao' in message.content:
        await message.channel.send(f'NÃO DIGA ISSO, {message.author.mention}!')
        await message.delete()
    await bot.process_commands(message)
@bot.command(name='ola')
async def enviar_ola(ctx):
    name = ctx.author.name
    resposta = f'ola {name}'


    await ctx.send(resposta)


bot.run('MTE1MDQ2MzQ5ODgxMjQwMzcyMg.GPk6AG.urfRk8YB2sbT_Kd-B0SnJkTkbp6-75Uda_3yso')
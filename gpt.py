import openai

openai.api_key = "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"

response = openai.ChatCompletion.create(
    model="gpt-3.5-turbo",
    messages=[
        {"role": "system", "content": "You are a helpful assistant."},
        {"role": "user", "content": "What are you?"},
    ]
)

print(response['choices'][0]['message']['content'])

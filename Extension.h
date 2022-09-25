#pragma once
#include "Engine/Engine.h"

/*
https://github.com/hammerinformation/
 */

namespace HIExtension
{
	using namespace  std;
	

	inline int  Multiply(const TArray<int>& Values)
	{
		int Value = 1;

		for (const int i : Values)
		{
			Value *= i;
		}
		return  Value;
	}
	inline int  Sum(const TArray<int>& Values)
	{
		int Value = 0;

		for (const int i : Values)
		{
			Value += i;
		}
		return  Value;
	}




	inline void Print(const FColor& Color, const int& Value, const FString& Text = "", const float& Time = 1.0f)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, Color, Text + FString::Printf(TEXT("%d"), Value));

		}

	}

	inline void Print(const FColor& Color, const float& Value, const FString& Text = "", const float& Time = 1.0f)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, Color, Text + FString::Printf(TEXT("%f"), Value));

		}

	}
	inline void Print(const FColor& Color, const FString& Text = "", const float& Time = 1.0f)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, Color, Text);

		}

	}
	


}

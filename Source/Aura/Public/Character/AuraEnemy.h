// Copyright Fede Prado

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/InteractablesInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IInteractablesInterface
{
	GENERATED_BODY()
	
public: 
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};

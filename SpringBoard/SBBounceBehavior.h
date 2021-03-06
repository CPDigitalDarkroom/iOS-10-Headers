//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

#import "UICollisionBehaviorDelegate-Protocol.h"

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicItemBehavior, UIGravityBehavior;
@protocol UIDynamicItem;

@interface SBBounceBehavior : UIDynamicBehavior <UICollisionBehaviorDelegate>
{
    double _midwayPosition;
    double _completionThreshold;
    double _previousLinearVelocity;
    struct CGRect _targetFrame;
    id <UIDynamicItem> _item;
    UIDynamicItemBehavior *_bodyBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_pushBehavior;
    UIAttachmentBehavior *_draggingBehavior;
    double _gravity;
    double _velocity;
    double _elasticity;
    double _friction;
    double _resistance;
    double _minVelocityToAssist;
    double _maxVelocityToAssist;
    double _maxVelocityAssistance;
    struct UIEdgeInsets _boundaryInsets;
}

@property(nonatomic) struct UIEdgeInsets boundaryInsets; // @synthesize boundaryInsets=_boundaryInsets;
@property(nonatomic) double maxVelocityAssistance; // @synthesize maxVelocityAssistance=_maxVelocityAssistance;
@property(nonatomic) double maxVelocityToAssist; // @synthesize maxVelocityToAssist=_maxVelocityToAssist;
@property(nonatomic) double minVelocityToAssist; // @synthesize minVelocityToAssist=_minVelocityToAssist;
@property(nonatomic) double resistance; // @synthesize resistance=_resistance;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double elasticity; // @synthesize elasticity=_elasticity;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double gravity; // @synthesize gravity=_gravity;
- (void).cxx_destruct;
- (_Bool)allowsAnimatorToStop;
- (double)_maxVelocityToAssist;
- (double)_minVelocityToAssist;
- (double)_velocityAssistance;
- (_Bool)_shouldAssistWithVelocity:(double)arg1;
- (double)_adjustedVelocity:(double)arg1;
- (double)_itemOriginY;
- (_Bool)_itemStopped;
- (_Bool)_itemCompleted;
- (_Bool)_itemPastMidway;
- (double)_percentRemaining;
- (double)_percentComplete;
- (void)_removeDraggingBehavior;
- (void)_beginInteraction;
- (void)finishInteraction;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1 removingGravityAtMidway:(_Bool)arg2;
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;
- (void)initiateInteractionFromPoint:(struct CGPoint)arg1;
- (void)bounce;
- (void)_setupCollisionBoundaries;
- (void)_frameCollisionBoundaryPoints:(struct CGPoint *)arg1;
- (_Bool)_isGravityDown;
- (_Bool)isActive;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 targetFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


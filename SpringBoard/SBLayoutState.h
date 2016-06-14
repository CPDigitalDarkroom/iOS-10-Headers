//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBLayoutContext-Protocol.h"

@class NSSet, NSString;

@interface SBLayoutState : NSObject <SBLayoutContext, BSDescriptionProviding>
{
    NSSet *_elements;
    long long _interfaceOrientation;
}

+ (long long)_defaultOrientation;
+ (id)initialLayoutState;
@property(readonly, nonatomic) NSSet *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_layoutStateForTransitionContext:(id)arg1;
- (_Bool)layoutContainsRole:(long long)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)elementWithRole:(long long)arg1;
- (id)layoutStateForTransitionContext:(id)arg1;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (_Bool)isEqualToLayoutState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_stateWithElements:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_initWithElements:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_initWithElements:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

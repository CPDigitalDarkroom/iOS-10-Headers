//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "BSTransactionObserver-Protocol.h"

@class BSTransaction, BSTransactionBlockObserver, NSString, SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory;
@protocol SBStartupTransition;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding>
{
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionContextPersistence *_transitionContextPersistence;
    SBStartupTransitionFactory *_transitionFactory;
    BSTransaction<SBStartupTransition> *_transition;
    BSTransactionBlockObserver *_transitionObserver;
    _Bool _ranOnce;
}

@property(retain, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory; // @synthesize transitionFactory=_transitionFactory;
@property(retain, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence; // @synthesize transitionContextPersistence=_transitionContextPersistence;
@property(readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @synthesize startupTransition=_transition;
- (void).cxx_destruct;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_saveContextFromTransitionContext:(id)arg1;
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;
- (id)initWithInitialRestartState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

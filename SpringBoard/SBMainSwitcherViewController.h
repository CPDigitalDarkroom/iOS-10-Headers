//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLayoutElementViewController.h"

#import "SBMainAppSwitcherContentViewControllerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class FBUIApplicationSceneDeactivationAssertion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherRemoteAlertSet, SBAppSwitcherServiceSet, SBAppSwitcherSettings, SBBestAppSuggestion, SBDisplayItem, SBMainDisplayLayoutState, SBSwitcherContainerView, UIViewController, _UILegibilitySettings;
@protocol SBMainAppSwitcherContentViewControlling;

@interface SBMainSwitcherViewController : SBLayoutElementViewController <SBMainAppSwitcherContentViewControllerDelegate, _UISettingsKeyObserver>
{
    NSMutableArray *_displayItems;
    SBAppSwitcherServiceSet *_switcherServices;
    SBAppSwitcherRemoteAlertSet *_switcherRemoteAlerts;
    SBBestAppSuggestion *_bestAppSuggestion;
    UIViewController<SBMainAppSwitcherContentViewControlling> *_contentViewController;
    SBSwitcherContainerView *_contentView;
    SBDisplayItem *_returnToDisplayItem;
    SBDisplayItem *_returnToSideDisplayItem;
    SBDisplayItem *_initialDisplayItem;
    SBMainDisplayLayoutState *_initialLayoutState;
    NSMutableDictionary *_otherReturnToElementsByRole;
    _Bool _visible;
    SBAppSwitcherSettings *_settings;
    Class _contentViewControllerClass;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    NSMutableSet *_appsHostedForTermination;
    SBAppStatusBarSettingsAssertion *_showStatusBarForSwitcherAssertion;
    FBUIApplicationSceneDeactivationAssertion *_appSwitcherResignActiveAssertion;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)sharedInstance;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(copy, nonatomic, setter=_setOtherReturnToElementsByRole:) NSMutableDictionary *_otherReturnToElementsByRole; // @synthesize _otherReturnToElementsByRole;
@property(copy, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState; // @synthesize _initialLayoutState;
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem; // @synthesize _initialDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem; // @synthesize _returnToSideDisplayItem;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem; // @synthesize _returnToDisplayItem;
- (void).cxx_destruct;
- (void)_disableContextHostingForApp:(id)arg1;
- (void)_temporarilyHostAppForQuitting:(id)arg1;
- (void)_quitAppRepresentedByDisplayItem:(id)arg1 forReason:(long long)arg2;
- (void)_replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeDisplayItem:(id)arg1 forReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_insertSwitcherService:(id)arg1 atIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_rebuildAppListCache;
- (void)_destroyAppListCache;
- (void)_cacheAppList;
- (void)_appActivationStateDidChange:(id)arg1;
- (void)_updateBestAppSuggestion;
- (void)_continuityAppSuggestionChanged:(id)arg1;
- (_Bool)_isBestAppSuggestionEligibleForSwitcher:(id)arg1;
- (void)_switcherRemoteAlertAdded:(id)arg1;
- (void)_switcherRemoteAlertRemoved:(id)arg1;
- (void)_switcherServiceRemoved:(id)arg1;
- (void)_switcherServiceAdded:(id)arg1;
- (void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3;
- (_Bool)supportsReuse;
- (void)_warmAppInfoForAppsInList;
- (void)_switcherModelChanged:(id)arg1;
- (void)_releaseSwitcherOrientationLock;
- (void)_lockOrientationForSwitcher;
- (id)_contentViewController;
- (void)prepareForReuse;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)view;
- (void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2;
- (_Bool)switcherContentController:(id)arg1 canDeleteItem:(id)arg2;
- (void)switcherContentController:(id)arg1 deletedItem:(id)arg2;
- (void)switcherContentController:(id)arg1 selectedItem:(id)arg2;
- (void)_updateContentViewControllerClassFromSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_entityForDisplayItem:(id)arg1;
- (id)_displayItemFromAlert:(id)arg1;
- (id)_displayItemFromLayoutElement:(id)arg1;
- (CDUnknownBlockType)_dismissSwitcherValidatorWithEventLabel:(id)arg1 transactionProvider:(CDUnknownBlockType)arg2;
- (void)_configureRequestForDismissal:(id)arg1 withEventLabel:(id)arg2;
- (CDUnknownBlockType)_activateSwitcherValidatorWithEventLabel:(id)arg1 transactionProvider:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_toggleSwitcherTransitionValidator;
- (void)_doUglySiriActivationThingsIfNecessary:(id)arg1;
- (void)_setPreviousLayoutState:(id)arg1 withTopAlert:(id)arg2;
- (id)pageForDisplayItem:(id)arg1;
- (void)performDismissAnimationForTransitionRequest:(id)arg1 toDisplayItem:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)performPresentationAnimationForTransitionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)requiresGrabberForControlCenterGesture;
- (_Bool)isVisible;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setReturnToDisplayItem:(id)arg1;
- (id)nextDisplayItem;
- (void)setTransitionParameters:(CDStruct_efa48ab2)arg1;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)startTransitionPresenting:(_Bool)arg1 withRequest:(id)arg2;
- (_Bool)canTransitionWithTranslation;
- (_Bool)toggleSwitcherNoninteractively;
- (_Bool)dismissSwitcherNoninteractively;
- (_Bool)activateSwitcherNoninteractively;
- (double)scaleForDownscaledSnapshotGeneration;
- (void)dealloc;
- (id)_initWithDisplay:(id)arg1;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


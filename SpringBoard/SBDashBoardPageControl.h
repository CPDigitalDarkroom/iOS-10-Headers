//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageControl.h>

@class SBIconPageIndicatorImageSetCache, SBIconPageIndicatorImageSetResult;

@interface SBDashBoardPageControl : UIPageControl
{
    _Bool _cameraPageEnabled;
    _Bool __legibilityEnabled;
    _Bool __initializedLegibility;
    SBIconPageIndicatorImageSetCache *_imageSetCache;
    double __cachedDefaultHeight;
    SBIconPageIndicatorImageSetResult *__pageIndicatorImageSets;
    SBIconPageIndicatorImageSetResult *__cameraIndicatorImageSets;
}

+ (struct CGSize)defaultSize;
@property(retain, nonatomic, getter=_cameraIndicatorImageSets, setter=_setCameraIndicatorImageSets:) SBIconPageIndicatorImageSetResult *_cameraIndicatorImageSets; // @synthesize _cameraIndicatorImageSets=__cameraIndicatorImageSets;
@property(retain, nonatomic, getter=_pageIndicatorImageSets, setter=_setPageIndicatorImageSets:) SBIconPageIndicatorImageSetResult *_pageIndicatorImageSets; // @synthesize _pageIndicatorImageSets=__pageIndicatorImageSets;
@property(nonatomic, getter=_cachedDefaultHeight, setter=_setCachedDefaultHeight:) double _cachedDefaultHeight; // @synthesize _cachedDefaultHeight=__cachedDefaultHeight;
@property(nonatomic, getter=_hasInitializedLegibility, setter=_setHasInitializedLegibility:) _Bool _initializedLegibility; // @synthesize _initializedLegibility=__initializedLegibility;
@property(nonatomic, getter=_legibilityEnabled, setter=_setLegibilityEnabled:) _Bool _legibilityEnabled; // @synthesize _legibilityEnabled=__legibilityEnabled;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *imageSetCache; // @synthesize imageSetCache=_imageSetCache;
@property(nonatomic, getter=isCameraPageEnabled) _Bool cameraPageEnabled; // @synthesize cameraPageEnabled=_cameraPageEnabled;
- (void).cxx_destruct;
- (double)_indicatorSpacing;
- (struct CGRect)_modernBounds;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)_invalidateIndicators;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (id)_createModernIndicatorImageFromView:(id)arg1;
- (struct CGSize)_modernTallPageIndicatorSize;
- (id)_pageIndicatorImage:(_Bool)arg1;
- (id)_cameraIndicatorImage:(_Bool)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)setLegibilitySettings:(id)arg1;
- (double)defaultHeight;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

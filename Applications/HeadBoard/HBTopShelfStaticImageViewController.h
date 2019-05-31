//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBBubbleAnimatorViewProvider.h"
#import "HBTopShelfRepresentationHostProtocol.h"

@class HBTopShelfExtensionMonitor, HBTopShelfRepresentation, HBTopShelfVolatileImageView, NSString;

@interface HBTopShelfStaticImageViewController : UIViewController <HBBubbleAnimatorViewProvider, HBTopShelfRepresentationHostProtocol>
{
    HBTopShelfRepresentation *_representation;	// 8 = 0x8
    HBTopShelfExtensionMonitor *_extensionMonitor;	// 16 = 0x10
    HBTopShelfVolatileImageView *_imageView;	// 24 = 0x18
}

@property(retain, nonatomic) HBTopShelfVolatileImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) HBTopShelfExtensionMonitor *extensionMonitor; // @synthesize extensionMonitor=_extensionMonitor;
@property(retain, nonatomic) HBTopShelfRepresentation *representation; // @synthesize representation=_representation;
- (void).cxx_destruct;	// IMP=0x00000001000640d0
- (void)_updateImageViewForRepresentation;	// IMP=0x0000000100063fe0
- (id)viewsForAnimator:(id)arg1;	// IMP=0x0000000100063f44
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100063ea4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100063e04
- (void)loadView;	// IMP=0x0000000100063cc4
- (void)dealloc;	// IMP=0x0000000100063b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


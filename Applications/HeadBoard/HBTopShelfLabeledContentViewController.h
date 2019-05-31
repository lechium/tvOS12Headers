//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBBubbleAnimatorViewProvider.h"
#import "HBTopShelfLabeledContentViewDataSource.h"
#import "HBTopShelfLabeledContentViewDelegate.h"
#import "HBTopShelfRepresentationHostProtocol.h"

@class HBTopShelfExtensionMonitor, HBTopShelfLabeledContentView, HBTopShelfRepresentation, NSString;

@interface HBTopShelfLabeledContentViewController : UIViewController <HBTopShelfLabeledContentViewDelegate, HBTopShelfLabeledContentViewDataSource, HBBubbleAnimatorViewProvider, HBTopShelfRepresentationHostProtocol>
{
    HBTopShelfRepresentation *_representation;	// 8 = 0x8
    HBTopShelfExtensionMonitor *_extensionMonitor;	// 16 = 0x10
    HBTopShelfLabeledContentView *_labeledContentView;	// 24 = 0x18
}

+ (long long)_safeShapeForLabeledContentItem:(id)arg1;	// IMP=0x000000010001dd08
+ (long long)_genericPlaceholderForShape:(long long)arg1;	// IMP=0x000000010001dce4
@property(retain, nonatomic) HBTopShelfLabeledContentView *labeledContentView; // @synthesize labeledContentView=_labeledContentView;
@property(retain, nonatomic) HBTopShelfExtensionMonitor *extensionMonitor; // @synthesize extensionMonitor=_extensionMonitor;
@property(retain, nonatomic) HBTopShelfRepresentation *representation; // @synthesize representation=_representation;
- (void).cxx_destruct;	// IMP=0x000000010001dda4
- (long long)_mediaTypeForItem:(id)arg1;	// IMP=0x000000010001d90c
- (long long)_placeholderForItem:(id)arg1;	// IMP=0x000000010001d7f0
- (id)_indexPathByAddingItems:(long long)arg1 toIndexPath:(id)arg2;	// IMP=0x000000010001d5e8
- (id)_indexPathBySubtractingItems:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010001d464
- (id)_imageFromURL:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x000000010001d258
- (void)_updateCell:(id)arg1 withImageStack:(id)arg2 imageSize:(struct CGSize)arg3 normalizedSize:(struct CGSize)arg4 withTVContentItem:(id)arg5;	// IMP=0x000000010001ce0c
- (id)viewsForAnimator:(id)arg1;	// IMP=0x000000010001cc34
- (void)labeledContentView:(id)arg1 didPlayItemAtIndexPath:(id)arg2;	// IMP=0x000000010001c908
- (void)labeledContentView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001c608
- (_Bool)_respresentationRequiresRoundedCorners:(id)arg1;	// IMP=0x000000010001c574
- (id)labeledContentView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001afbc
- (void)labeledContentView:(id)arg1 configureLabel:(id)arg2 forSection:(unsigned long long)arg3;	// IMP=0x000000010001ae64
- (id)labeledContentView:(id)arg1 titleForSection:(unsigned long long)arg2;	// IMP=0x000000010001adc0
- (struct CGSize)labeledContentView:(id)arg1 preferredSizeForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001ac54
- (unsigned long long)labeledContentView:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x000000010001ab90
- (unsigned long long)numberOfSectionsInLabeledContentView:(id)arg1;	// IMP=0x000000010001ab1c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001a950
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001a8b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001a840
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001a7a0
- (void)loadView;	// IMP=0x000000010001a68c
- (void)dealloc;	// IMP=0x000000010001a4f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

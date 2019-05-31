/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewItemDelegate <NSObject>
@optional
-(void)_previewItemControllerDidCancelPreview:(id)arg1;
-(BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2;
-(id)_presentedViewControllerForPreviewItemController:(id)arg1;
-(void)_previewItemController:(id)arg1 willPresentPreview:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4;
-(void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(BOOL)arg3;
-(id)_presentationRectsForPreviewItemController:(id)arg1;
-(CGRect*)_presentationRectForPreviewItemController:(id)arg1;
-(id)_presentationSnapshotForPreviewItemController:(id)arg1;
-(void)_interactionStartedFromPreviewItemController:(id)arg1;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1;
-(void)_previewItemController:(id)arg1 commitPreview:(id)arg2;

@required
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(long long*)arg3;

@end


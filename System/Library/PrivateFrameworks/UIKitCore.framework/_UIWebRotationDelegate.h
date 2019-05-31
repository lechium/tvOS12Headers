/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebRotationDelegate
@optional
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(double)zoomedDocumentScale;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(SCD_Struct_UI111*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI111)arg2;
-(double)minimumScaleForSize:(CGSize)arg1;
-(CGRect*)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(BOOL)considerHeightOfRectOfInterestForRotation;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface UIShadowView : UIView {

	UIImage* _image;

}
+(id)topShadowImage;
+(id)bottomShadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowImage:(id)arg1 forEdge:(unsigned long long)arg2 inside:(BOOL)arg3 ;
@end


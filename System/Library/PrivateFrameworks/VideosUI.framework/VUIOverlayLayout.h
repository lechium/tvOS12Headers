/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIOverlayLayoutProtocol.h>

@class VUIImageLayout, VUIProgressBarLayout, NSString;

@interface VUIOverlayLayout : NSObject <VUIOverlayLayoutProtocol> {

	VUIImageLayout* _appImageLayout;
	VUIProgressBarLayout* _progressBarLayout;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                                  //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) VUIImageLayout * appImageLayout;                       //@synthesize appImageLayout=_appImageLayout - In the implementation block
@property (nonatomic,retain) VUIProgressBarLayout * progressBarLayout;              //@synthesize progressBarLayout=_progressBarLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
+(id)overlayLayoutForInterfaceIdiom:(long long)arg1 ;
-(long long)type;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(VUIImageLayout *)appImageLayout;
-(VUIProgressBarLayout *)progressBarLayout;
-(void)setProgressBarLayout:(VUIProgressBarLayout *)arg1 ;
-(void)setAppImageLayout:(VUIImageLayout *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentGaussianBlurFilter.h>

@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter> {

	NSNumber* _inputRadius;

}

@property (nonatomic,retain) NSNumber * inputRadius;              //@synthesize inputRadius=_inputRadius - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputRadius:(id)arg1 ;
-(id)inputKeys;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)settingInputRadius;
-(void)setSettingInputRadius:(id)arg1 ;
-(NSNumber *)inputRadius;
-(void)dealloc;
-(id)outputImage;
@end

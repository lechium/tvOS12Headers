/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextPosition.h>

@interface WKTextPosition : UITextPosition {

	CGRect _positionRect;

}

@property (assign,nonatomic) CGRect positionRect;              //@synthesize positionRect=_positionRect - In the implementation block
+(id)textPositionWithRect:(CGRect)arg1 ;
-(CGRect)positionRect;
-(void)setPositionRect:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end


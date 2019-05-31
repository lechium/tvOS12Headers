/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIColor : NSObject <NSCopying> {

	CGColorRef _cgColor;

}

@property (nonatomic,readonly) CGColorRef CGColor;              //@synthesize cgColor=_cgColor - In the implementation block
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithCIColor:(id)arg1 ;
-(id)colorUsingCGColorSpace:(CGColorSpaceRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)CGColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithCIColor:(id)arg1 ;
@end


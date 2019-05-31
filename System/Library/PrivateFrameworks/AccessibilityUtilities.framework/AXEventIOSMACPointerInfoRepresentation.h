/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _pressed;
	long long _buttonIndex;
	CGPoint _location;

}

@property (assign,nonatomic) BOOL pressed;                       //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) long long buttonIndex;              //@synthesize buttonIndex=_buttonIndex - In the implementation block
@property (assign,nonatomic) CGPoint location;                   //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)buttonIndex;
-(void)setButtonIndex:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
@end


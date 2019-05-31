/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;

}
+(BOOL)supportsSecureCoding;
-(BOOL)hasExpired;
-(BOOL)isNewerThan:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


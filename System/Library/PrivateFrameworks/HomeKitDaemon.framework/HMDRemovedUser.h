/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding> {

	HMDUser* _user;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDUser * user;                       //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)removedUserWithUser:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSDate *)expirationDate;
-(HMDUser *)user;
-(BOOL)isExpired;
-(BOOL)isEqualToUser:(id)arg1 ;
-(id)initWithUser:(id)arg1 expiration:(id)arg2 ;
-(BOOL)isEqualToUserID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end


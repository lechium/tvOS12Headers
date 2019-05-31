/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

@interface _HMDAppleAccountIdentifier : _HMDAccountIdentifier {

	NSString* _identifierString;

}

@property (copy,readonly) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(id)namespace;
+(BOOL)supportsSecureCoding;
-(BOOL)isAuthenticated;
-(id)initWithIdentifierString:(id)arg1 ;
-(NSString *)identifierString;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end


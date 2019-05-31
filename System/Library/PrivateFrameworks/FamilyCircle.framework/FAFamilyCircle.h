/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, FAFamilyCloudKitProperties, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding> {

	NSArray* _members;
	FAFamilyCloudKitProperties* _cloudKitProperties;
	NSDictionary* __serverResponse;

}

@property (readonly) NSDictionary * _serverResponse;                               //@synthesize _serverResponse=__serverResponse - In the implementation block
@property (readonly) NSArray * members;                                            //@synthesize members=_members - In the implementation block
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;              //@synthesize cloudKitProperties=_cloudKitProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithServerResponse:(id)arg1 ;
-(NSArray *)members;
-(FAFamilyCloudKitProperties *)cloudKitProperties;
-(NSDictionary *)_serverResponse;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

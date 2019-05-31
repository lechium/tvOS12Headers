/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest {

	BOOL _includeInternalState;
	BOOL _includePayloadContents;
	NSString* _organizationIdentifier;
	NSArray* _payloadIdentifiers;

}

@property (assign,nonatomic) BOOL includeInternalState;                    //@synthesize includeInternalState=_includeInternalState - In the implementation block
@property (assign,nonatomic) BOOL includePayloadContents;                  //@synthesize includePayloadContents=_includePayloadContents - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * payloadIdentifiers;                   //@synthesize payloadIdentifiers=_payloadIdentifiers - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSString *)organizationIdentifier;
-(BOOL)includePayloadContents;
-(BOOL)includeInternalState;
-(void)setIncludeInternalState:(BOOL)arg1 ;
-(void)setIncludePayloadContents:(BOOL)arg1 ;
-(void)setPayloadIdentifiers:(NSArray *)arg1 ;
-(NSArray *)payloadIdentifiers;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


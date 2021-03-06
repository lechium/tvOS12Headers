/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding> {

	NSString* _assertionID;
	RPCompanionLinkClient* _client;
	NSString* _destinationID;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * destinationID;                      //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAssertionID:(NSString *)arg1 ;
-(NSString *)assertionID;
-(NSString *)destinationID;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)setDestinationID:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)invalidate;
@end


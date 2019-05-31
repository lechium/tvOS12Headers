/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHSDMAPEntityKind;

@interface TVHSDMAPEntityResponseParser : NSObject {

	unsigned long long _maxEntities;
	unsigned long long _protocol;
	TVHSDMAPEntityKind* _entityKind;

}

@property (assign,nonatomic) unsigned long long protocol;                  //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) TVHSDMAPEntityKind * entityKind;              //@synthesize entityKind=_entityKind - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntities;               //@synthesize maxEntities=_maxEntities - In the implementation block
+(id)_errorFromErrorResponsePayload:(id)arg1 ;
+(id)_errorFromUpdateResponsePayload:(id)arg1 ;
+(unsigned long long)_responseTypeFromUpdateTypePayload:(id)arg1 ;
+(id)_deletedEntityNonPersistentIDsFromDeletedIDsListingPayload:(id)arg1 ;
-(void)setProtocol:(unsigned long long)arg1 ;
-(id)initWithProtocol:(unsigned long long)arg1 ;
-(id)parsedResponseFromResponse:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)maxEntities;
-(unsigned)_expectedResponseCodeForRequestType:(unsigned long long)arg1 ;
-(id)_parsedResponseFromResponseData:(id)arg1 expectedResponseCode:(unsigned)arg2 requestType:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned)_expectedDAAPResponseCodeForRequestType:(unsigned long long)arg1 ;
-(unsigned)_expectedDPAPResponseCodeForRequestType:(unsigned long long)arg1 ;
-(id)_parsedResponseFromResponseCode:(unsigned)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3 ;
-(id)_parsedResponseFromDAAPResponseCode:(unsigned)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3 ;
-(id)_parsedResponseFromDPAPResponseCode:(unsigned)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3 ;
-(id)_entitiesFromListingTagPayload:(id)arg1 entityType:(unsigned long long)arg2 browseStyleListing:(BOOL)arg3 ;
-(id)_parsedResponseFromResponsePayload:(id)arg1 listingCode:(unsigned)arg2 browseStyleListing:(BOOL)arg3 entityType:(unsigned long long)arg4 ;
-(TVHSDMAPEntityKind *)entityKind;
-(void)setEntityKind:(TVHSDMAPEntityKind *)arg1 ;
-(id)init;
-(unsigned long long)protocol;
-(void)setMaxEntities:(unsigned long long)arg1 ;
@end


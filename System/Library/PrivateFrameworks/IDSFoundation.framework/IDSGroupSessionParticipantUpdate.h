/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSDate, NSData, NSArray, NSDictionary;

@interface IDSGroupSessionParticipantUpdate : NSObject {

	NSUUID* _groupUUID;
	BOOL _isInitiator;
	unsigned long long _participantIdentifier;
	NSString* _participantDestinationID;
	unsigned long long _participantUpdateType;
	BOOL _fromServer;
	NSDate* _serverDate;
	NSData* _participantData;
	NSData* _clientContextData;
	NSArray* _members;
	NSDictionary* _participantIDs;
	NSUUID* _relaySessionID;

}

@property (nonatomic,readonly) BOOL isInitiator;                                      //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) NSUUID * groupUUID;                                    //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * participantDestinationID;                   //@synthesize participantDestinationID=_participantDestinationID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantUpdateType;              //@synthesize participantUpdateType=_participantUpdateType - In the implementation block
@property (nonatomic,readonly) BOOL fromServer;                                       //@synthesize fromServer=_fromServer - In the implementation block
@property (nonatomic,readonly) NSDate * serverDate;                                   //@synthesize serverDate=_serverDate - In the implementation block
@property (nonatomic,readonly) NSData * participantData;                              //@synthesize participantData=_participantData - In the implementation block
@property (nonatomic,readonly) NSData * clientContextData;                            //@synthesize clientContextData=_clientContextData - In the implementation block
@property (nonatomic,readonly) NSArray * members;                                     //@synthesize members=_members - In the implementation block
@property (nonatomic,readonly) NSDictionary * participantIDs;                         //@synthesize participantIDs=_participantIDs - In the implementation block
@property (nonatomic,readonly) NSUUID * relaySessionID;                               //@synthesize relaySessionID=_relaySessionID - In the implementation block
-(BOOL)isInitiator;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithGroupUUID:(id)arg1 isInitiator:(BOOL)arg2 participantIdentifier:(unsigned long long)arg3 participantDestinationID:(id)arg4 participantUpdateType:(unsigned long long)arg5 fromServer:(BOOL)arg6 serverDate:(id)arg7 participantData:(id)arg8 clientContextData:(id)arg9 members:(id)arg10 participantIDs:(id)arg11 relaySessionID:(id)arg12 ;
-(NSString *)participantDestinationID;
-(unsigned long long)participantUpdateType;
-(BOOL)fromServer;
-(NSDate *)serverDate;
-(NSData *)clientContextData;
-(NSDictionary *)participantIDs;
-(NSUUID *)relaySessionID;
-(NSUUID *)groupUUID;
-(unsigned long long)participantIdentifier;
-(NSArray *)members;
-(NSData *)participantData;
-(id)description;
-(id)debugDescription;
-(id)dictionaryRepresentation;
@end

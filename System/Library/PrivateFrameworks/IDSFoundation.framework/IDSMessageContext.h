/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableDictionary, NSString, NSNumber, NSData, NSDate, NSError;

@interface IDSMessageContext : NSObject {

	NSMutableDictionary* _dict;
	id _boostContext;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic) BOOL wantsAppAck; 
@property (nonatomic,copy) NSString * storageGuid; 
@property (nonatomic,retain) NSNumber * broadcastTime; 
@property (nonatomic,retain) NSNumber * priority; 
@property (nonatomic,retain) id boostContext; 
@property (assign,nonatomic) long long broadcastID; 
@property (assign,nonatomic) long long connectionType; 
@property (assign,nonatomic) BOOL usedEngram; 
@property (nonatomic,copy) NSString * outgoingResponseIdentifier; 
@property (nonatomic,copy) NSString * incomingResponseIdentifier; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSString * fromID; 
@property (nonatomic,copy) NSString * toID; 
@property (nonatomic,copy) NSString * originalDestinationDevice; 
@property (nonatomic,copy) NSData * engramGroupID; 
@property (nonatomic,copy) NSNumber * originalCommand; 
@property (nonatomic,copy) NSNumber * serverTimestamp; 
@property (assign,nonatomic) BOOL expectsPeerResponse; 
@property (assign,nonatomic) BOOL wantsManualAck; 
@property (assign,nonatomic) BOOL fromServerStorage; 
@property (nonatomic,readonly) NSDate * serverReceivedTime; 
@property (nonatomic,readonly) double averageLocalRTT; 
@property (nonatomic,readonly) long long localMessageState; 
@property (nonatomic,readonly) BOOL deviceBlackedOut; 
@property (nonatomic,readonly) NSError * wpConnectionError; 
@property (nonatomic,copy) NSString * senderCorrelationIdentifier; 
-(long long)connectionType;
-(void)setConnectionType:(long long)arg1 ;
-(long long)localMessageState;
-(NSNumber *)serverTimestamp;
-(id)initWithDictionary:(id)arg1 boostContext:(id)arg2 ;
-(id)boostContext;
-(void)setBoostContext:(id)arg1 ;
-(NSDate *)serverReceivedTime;
-(double)averageLocalRTT;
-(BOOL)deviceBlackedOut;
-(NSError *)wpConnectionError;
-(void)setOutgoingResponseIdentifier:(NSString *)arg1 ;
-(void)setIncomingResponseIdentifier:(NSString *)arg1 ;
-(void)setStorageGuid:(NSString *)arg1 ;
-(NSString *)storageGuid;
-(void)setFromID:(NSString *)arg1 ;
-(NSString *)fromID;
-(void)setToID:(NSString *)arg1 ;
-(void)setOriginalDestinationDevice:(NSString *)arg1 ;
-(NSString *)originalDestinationDevice;
-(void)setEngramGroupID:(NSData *)arg1 ;
-(NSData *)engramGroupID;
-(void)setOriginalCommand:(NSNumber *)arg1 ;
-(NSNumber *)originalCommand;
-(void)setBroadcastTime:(NSNumber *)arg1 ;
-(NSNumber *)broadcastTime;
-(void)setServerTimestamp:(NSNumber *)arg1 ;
-(void)setSenderCorrelationIdentifier:(NSString *)arg1 ;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(BOOL)wantsAppAck;
-(void)setBroadcastID:(long long)arg1 ;
-(long long)broadcastID;
-(void)setWantsManualAck:(BOOL)arg1 ;
-(BOOL)wantsManualAck;
-(void)setFromServerStorage:(BOOL)arg1 ;
-(void)setUsedEngram:(BOOL)arg1 ;
-(BOOL)usedEngram;
-(NSString *)outgoingResponseIdentifier;
-(BOOL)expectsPeerResponse;
-(NSString *)serviceIdentifier;
-(NSString *)senderCorrelationIdentifier;
-(BOOL)fromServerStorage;
-(NSString *)toID;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)incomingResponseIdentifier;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSNumber *)priority;
@end


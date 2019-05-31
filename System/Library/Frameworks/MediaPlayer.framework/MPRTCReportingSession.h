/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString, RTCReporting, NSOperationQueue, NSMutableArray;

@interface MPRTCReportingSession : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _additionalUserInfo;
	NSString* _clientName;
	int _clientType;
	long long _clientVersion;
	BOOL _hasCompleteSessionSetup;
	BOOL _hasInitializedSession;
	id _hierarchyToken;
	RTCReporting* _internalSession;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _pendingReportingEvents;
	NSString* _serviceIdentifier;
	unsigned _sessionID;
	NSDictionary* _sessionUserInfo;

}

@property (nonatomic,copy) NSDictionary * additionalUserInfo; 
@property (nonatomic,copy) NSString * clientName; 
@property (assign,nonatomic) int clientType; 
@property (assign,nonatomic) long long clientVersion; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,retain) id hierarchyToken; 
@property (assign,nonatomic) unsigned sessionID; 
@property (nonatomic,readonly) BOOL hasCompleteSessionSetup; 
@property (nonatomic,readonly) BOOL hasInitializedSession; 
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
+(BOOL)_isRTCReportingSupported;
+(void)_recordEvent:(id)arg1 withInternalSession:(id)arg2 ;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)sessionID;
-(void)setClientType:(int)arg1 ;
-(void)setClientVersion:(long long)arg1 ;
-(void)setHierarchyToken:(id)arg1 ;
-(BOOL)hasCompleteSessionSetup;
-(BOOL)hasInitializedSession;
-(NSDictionary *)additionalUserInfo;
-(int)clientType;
-(long long)clientVersion;
-(id)hierarchyToken;
-(void)setAdditionalUserInfo:(NSDictionary *)arg1 ;
-(void)initializeSession;
-(void)completeSessionSetup;
-(void)finalizeSession;
-(void)recordEvent:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNetworkServiceProxyConnectionStatistics : PBCodable <NSCopying> {

	SCD_Struct_AW21* _connectionDurationBuckets;
	unsigned long long _captivePresentCount;
	unsigned long long _connectionCount;
	unsigned long long _mptcpSuccessCount;
	unsigned long long _restrictedNetworkCount;
	unsigned long long _resultConnectionResetCount;
	unsigned long long _resultNetworkUnavailableCount;
	unsigned long long _resultResponseTimeoutCount;
	unsigned long long _resultSendFailureCount;
	unsigned long long _resultServerBusyCount;
	unsigned long long _resultServerDetachedCount;
	unsigned long long _resultServerInterruptCount;
	unsigned long long _resultServerOfflineCount;
	unsigned long long _resultServerOrphanedCount;
	unsigned long long _resultServerSessionExpiredCount;
	unsigned long long _resultServerUnreachableCount;
	unsigned long long _resultSuccessCount;
	unsigned long long _resultUnknownErrorCount;
	unsigned long long _tfoSuccessCount;
	unsigned long long _timestamp;
	unsigned _alternatePathCount;
	unsigned _captivePresentFailedCount;
	unsigned _exceededMssCount;
	int _interfaceType;
	int _protocolType;
	unsigned _restrictedNetworkFailedCount;
	SCD_Struct_AW32 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                                                //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionCount; 
@property (assign,nonatomic) unsigned long long connectionCount;                               //@synthesize connectionCount=_connectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTfoSuccessCount; 
@property (assign,nonatomic) unsigned long long tfoSuccessCount;                               //@synthesize tfoSuccessCount=_tfoSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpSuccessCount; 
@property (assign,nonatomic) unsigned long long mptcpSuccessCount;                             //@synthesize mptcpSuccessCount=_mptcpSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasRestrictedNetworkCount; 
@property (assign,nonatomic) unsigned long long restrictedNetworkCount;                        //@synthesize restrictedNetworkCount=_restrictedNetworkCount - In the implementation block
@property (assign,nonatomic) BOOL hasCaptivePresentCount; 
@property (assign,nonatomic) unsigned long long captivePresentCount;                           //@synthesize captivePresentCount=_captivePresentCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultSuccessCount; 
@property (assign,nonatomic) unsigned long long resultSuccessCount;                            //@synthesize resultSuccessCount=_resultSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultNetworkUnavailableCount; 
@property (assign,nonatomic) unsigned long long resultNetworkUnavailableCount;                 //@synthesize resultNetworkUnavailableCount=_resultNetworkUnavailableCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerUnreachableCount; 
@property (assign,nonatomic) unsigned long long resultServerUnreachableCount;                  //@synthesize resultServerUnreachableCount=_resultServerUnreachableCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultSendFailureCount; 
@property (assign,nonatomic) unsigned long long resultSendFailureCount;                        //@synthesize resultSendFailureCount=_resultSendFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultResponseTimeoutCount; 
@property (assign,nonatomic) unsigned long long resultResponseTimeoutCount;                    //@synthesize resultResponseTimeoutCount=_resultResponseTimeoutCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultConnectionResetCount; 
@property (assign,nonatomic) unsigned long long resultConnectionResetCount;                    //@synthesize resultConnectionResetCount=_resultConnectionResetCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerBusyCount; 
@property (assign,nonatomic) unsigned long long resultServerBusyCount;                         //@synthesize resultServerBusyCount=_resultServerBusyCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerOfflineCount; 
@property (assign,nonatomic) unsigned long long resultServerOfflineCount;                      //@synthesize resultServerOfflineCount=_resultServerOfflineCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerDetachedCount; 
@property (assign,nonatomic) unsigned long long resultServerDetachedCount;                     //@synthesize resultServerDetachedCount=_resultServerDetachedCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerInterruptCount; 
@property (assign,nonatomic) unsigned long long resultServerInterruptCount;                    //@synthesize resultServerInterruptCount=_resultServerInterruptCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerSessionExpiredCount; 
@property (assign,nonatomic) unsigned long long resultServerSessionExpiredCount;               //@synthesize resultServerSessionExpiredCount=_resultServerSessionExpiredCount - In the implementation block
@property (assign,nonatomic) BOOL hasResultUnknownErrorCount; 
@property (assign,nonatomic) unsigned long long resultUnknownErrorCount;                       //@synthesize resultUnknownErrorCount=_resultUnknownErrorCount - In the implementation block
@property (assign,nonatomic) BOOL hasRestrictedNetworkFailedCount; 
@property (assign,nonatomic) unsigned restrictedNetworkFailedCount;                            //@synthesize restrictedNetworkFailedCount=_restrictedNetworkFailedCount - In the implementation block
@property (assign,nonatomic) BOOL hasCaptivePresentFailedCount; 
@property (assign,nonatomic) unsigned captivePresentFailedCount;                               //@synthesize captivePresentFailedCount=_captivePresentFailedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAlternatePathCount; 
@property (assign,nonatomic) unsigned alternatePathCount;                                      //@synthesize alternatePathCount=_alternatePathCount - In the implementation block
@property (assign,nonatomic) BOOL hasExceededMssCount; 
@property (assign,nonatomic) unsigned exceededMssCount;                                        //@synthesize exceededMssCount=_exceededMssCount - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionDurationBucketsCount; 
@property (nonatomic,readonly) unsigned* connectionDurationBuckets; 
@property (assign,nonatomic) BOOL hasProtocolType; 
@property (assign,nonatomic) int protocolType;                                                 //@synthesize protocolType=_protocolType - In the implementation block
@property (assign,nonatomic) BOOL hasResultServerOrphanedCount; 
@property (assign,nonatomic) unsigned long long resultServerOrphanedCount;                     //@synthesize resultServerOrphanedCount=_resultServerOrphanedCount - In the implementation block
-(void)setInterfaceType:(int)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(int)interfaceType;
-(id)interfaceTypeAsString:(int)arg1 ;
-(int)StringAsInterfaceType:(id)arg1 ;
-(unsigned long long)connectionDurationBucketsCount;
-(void)clearConnectionDurationBuckets;
-(unsigned)connectionDurationBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addConnectionDurationBuckets:(unsigned)arg1 ;
-(void)setHasConnectionCount:(BOOL)arg1 ;
-(BOOL)hasConnectionCount;
-(void)setTfoSuccessCount:(unsigned long long)arg1 ;
-(void)setHasTfoSuccessCount:(BOOL)arg1 ;
-(BOOL)hasTfoSuccessCount;
-(void)setMptcpSuccessCount:(unsigned long long)arg1 ;
-(void)setHasMptcpSuccessCount:(BOOL)arg1 ;
-(BOOL)hasMptcpSuccessCount;
-(void)setRestrictedNetworkCount:(unsigned long long)arg1 ;
-(void)setHasRestrictedNetworkCount:(BOOL)arg1 ;
-(BOOL)hasRestrictedNetworkCount;
-(void)setCaptivePresentCount:(unsigned long long)arg1 ;
-(void)setHasCaptivePresentCount:(BOOL)arg1 ;
-(BOOL)hasCaptivePresentCount;
-(void)setResultSuccessCount:(unsigned long long)arg1 ;
-(void)setHasResultSuccessCount:(BOOL)arg1 ;
-(BOOL)hasResultSuccessCount;
-(void)setResultNetworkUnavailableCount:(unsigned long long)arg1 ;
-(void)setHasResultNetworkUnavailableCount:(BOOL)arg1 ;
-(BOOL)hasResultNetworkUnavailableCount;
-(void)setResultServerUnreachableCount:(unsigned long long)arg1 ;
-(void)setHasResultServerUnreachableCount:(BOOL)arg1 ;
-(BOOL)hasResultServerUnreachableCount;
-(void)setResultSendFailureCount:(unsigned long long)arg1 ;
-(void)setHasResultSendFailureCount:(BOOL)arg1 ;
-(BOOL)hasResultSendFailureCount;
-(void)setResultResponseTimeoutCount:(unsigned long long)arg1 ;
-(void)setHasResultResponseTimeoutCount:(BOOL)arg1 ;
-(BOOL)hasResultResponseTimeoutCount;
-(void)setResultConnectionResetCount:(unsigned long long)arg1 ;
-(void)setHasResultConnectionResetCount:(BOOL)arg1 ;
-(BOOL)hasResultConnectionResetCount;
-(void)setResultServerBusyCount:(unsigned long long)arg1 ;
-(void)setHasResultServerBusyCount:(BOOL)arg1 ;
-(BOOL)hasResultServerBusyCount;
-(void)setResultServerOfflineCount:(unsigned long long)arg1 ;
-(void)setHasResultServerOfflineCount:(BOOL)arg1 ;
-(BOOL)hasResultServerOfflineCount;
-(void)setResultServerDetachedCount:(unsigned long long)arg1 ;
-(void)setHasResultServerDetachedCount:(BOOL)arg1 ;
-(BOOL)hasResultServerDetachedCount;
-(void)setResultServerInterruptCount:(unsigned long long)arg1 ;
-(void)setHasResultServerInterruptCount:(BOOL)arg1 ;
-(BOOL)hasResultServerInterruptCount;
-(void)setResultServerSessionExpiredCount:(unsigned long long)arg1 ;
-(void)setHasResultServerSessionExpiredCount:(BOOL)arg1 ;
-(BOOL)hasResultServerSessionExpiredCount;
-(void)setResultUnknownErrorCount:(unsigned long long)arg1 ;
-(void)setHasResultUnknownErrorCount:(BOOL)arg1 ;
-(BOOL)hasResultUnknownErrorCount;
-(void)setRestrictedNetworkFailedCount:(unsigned)arg1 ;
-(void)setHasRestrictedNetworkFailedCount:(BOOL)arg1 ;
-(BOOL)hasRestrictedNetworkFailedCount;
-(void)setCaptivePresentFailedCount:(unsigned)arg1 ;
-(void)setHasCaptivePresentFailedCount:(BOOL)arg1 ;
-(BOOL)hasCaptivePresentFailedCount;
-(void)setAlternatePathCount:(unsigned)arg1 ;
-(void)setHasAlternatePathCount:(BOOL)arg1 ;
-(BOOL)hasAlternatePathCount;
-(void)setExceededMssCount:(unsigned)arg1 ;
-(void)setHasExceededMssCount:(BOOL)arg1 ;
-(BOOL)hasExceededMssCount;
-(unsigned*)connectionDurationBuckets;
-(void)setConnectionDurationBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setProtocolType:(int)arg1 ;
-(void)setHasProtocolType:(BOOL)arg1 ;
-(BOOL)hasProtocolType;
-(id)protocolTypeAsString:(int)arg1 ;
-(int)StringAsProtocolType:(id)arg1 ;
-(void)setResultServerOrphanedCount:(unsigned long long)arg1 ;
-(void)setHasResultServerOrphanedCount:(BOOL)arg1 ;
-(BOOL)hasResultServerOrphanedCount;
-(unsigned long long)tfoSuccessCount;
-(unsigned long long)mptcpSuccessCount;
-(unsigned long long)restrictedNetworkCount;
-(unsigned long long)captivePresentCount;
-(unsigned long long)resultSuccessCount;
-(unsigned long long)resultNetworkUnavailableCount;
-(unsigned long long)resultServerUnreachableCount;
-(unsigned long long)resultSendFailureCount;
-(unsigned long long)resultResponseTimeoutCount;
-(unsigned long long)resultConnectionResetCount;
-(unsigned long long)resultServerBusyCount;
-(unsigned long long)resultServerOfflineCount;
-(unsigned long long)resultServerDetachedCount;
-(unsigned long long)resultServerInterruptCount;
-(unsigned long long)resultServerSessionExpiredCount;
-(unsigned long long)resultUnknownErrorCount;
-(unsigned)restrictedNetworkFailedCount;
-(unsigned)captivePresentFailedCount;
-(unsigned)alternatePathCount;
-(unsigned)exceededMssCount;
-(unsigned long long)resultServerOrphanedCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)protocolType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setConnectionCount:(unsigned long long)arg1 ;
-(unsigned long long)connectionCount;
@end


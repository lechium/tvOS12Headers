/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _requestEnd;
	double _requestStart;
	int _httpResponseCode;
	int _redirectCount;
	int _requestDataSize;
	int _responseDataSize;
	NSString* _serviceIpAddress;
	NSMutableArray* _transactionMetrics;
	SCD_Struct_GE40 _has;

}

@property (assign,nonatomic) BOOL hasHttpResponseCode; 
@property (assign,nonatomic) int httpResponseCode;                             //@synthesize httpResponseCode=_httpResponseCode - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIpAddress; 
@property (nonatomic,retain) NSString * serviceIpAddress;                      //@synthesize serviceIpAddress=_serviceIpAddress - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize;                              //@synthesize requestDataSize=_requestDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize;                             //@synthesize responseDataSize=_responseDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) double requestStart;                              //@synthesize requestStart=_requestStart - In the implementation block
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) double requestEnd;                                //@synthesize requestEnd=_requestEnd - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectCount; 
@property (assign,nonatomic) int redirectCount;                                //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionMetrics;              //@synthesize transactionMetrics=_transactionMetrics - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)transactionMetricsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHttpResponseCode:(int)arg1 ;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setServiceIpAddress:(NSString *)arg1 ;
-(NSString *)serviceIpAddress;
-(int)redirectCount;
-(void)setRedirectCount:(int)arg1 ;
-(double)requestStart;
-(void)setRequestStart:(double)arg1 ;
-(double)requestEnd;
-(void)setRequestEnd:(double)arg1 ;
-(NSMutableArray *)transactionMetrics;
-(void)addTransactionMetrics:(id)arg1 ;
-(unsigned long long)transactionMetricsCount;
-(void)clearTransactionMetrics;
-(id)transactionMetricsAtIndex:(unsigned long long)arg1 ;
-(void)setHasHttpResponseCode:(BOOL)arg1 ;
-(BOOL)hasHttpResponseCode;
-(BOOL)hasServiceIpAddress;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasRequestEnd;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(BOOL)hasRedirectCount;
-(int)httpResponseCode;
-(int)requestDataSize;
-(int)responseDataSize;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end


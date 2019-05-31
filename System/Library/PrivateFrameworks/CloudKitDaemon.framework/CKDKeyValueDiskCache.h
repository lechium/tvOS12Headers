/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject {

	double _expirationTimeout;
	PQLConnection* _db;
	NSString* _identifier;
	CKDClientContext* _context;

}

@property (nonatomic,retain) PQLConnection * db;                             //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double expirationTimeout;                       //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
-(PQLConnection *)db;
-(void)setDb:(PQLConnection *)arg1 ;
-(void)setExpirationTimeout:(double)arg1 ;
-(double)expirationTimeout;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(BOOL)setupCacheWithError:(id*)arg1 ;
-(id)dbPath;
-(void)_garbageCollectExpiredEntries;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(void)setIdentifier:(NSString *)arg1 ;
@end


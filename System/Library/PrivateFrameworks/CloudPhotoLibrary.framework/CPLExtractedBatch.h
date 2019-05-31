/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSMutableSet, CPLChangeBatch, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding> {

	NSDictionary* _uploadIdentifiers;
	NSMutableDictionary* _mutableUploadIdentifiers;
	NSSet* _untrustableScopedIdentifiers;
	NSMutableSet* _mutableUntrustableScopedIndentifiers;
	BOOL _resourceSizeIsCalculated;
	BOOL _full;
	BOOL _batchCanLowerQuota;
	unsigned long long _resourceSize;
	CPLChangeBatch* _batch;
	NSString* _clientCacheIdentifier;

}

@property (nonatomic,readonly) CPLChangeBatch * batch;                       //@synthesize batch=_batch - In the implementation block
@property (nonatomic,readonly) unsigned long long resourceSize;              //@synthesize resourceSize=_resourceSize - In the implementation block
@property (assign,getter=isFull,nonatomic) BOOL full;                        //@synthesize full=_full - In the implementation block
@property (nonatomic,readonly) BOOL batchCanLowerQuota;                      //@synthesize batchCanLowerQuota=_batchCanLowerQuota - In the implementation block
@property (nonatomic,copy) NSString * clientCacheIdentifier;                 //@synthesize clientCacheIdentifier=_clientCacheIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addChange:(id)arg1 ;
-(NSString *)clientCacheIdentifier;
-(id)uploadIdentifiers;
-(unsigned long long)resourceSize;
-(void)setFull:(BOOL)arg1 ;
-(void)setClientCacheIdentifier:(NSString *)arg1 ;
-(BOOL)batchCanLowerQuota;
-(id)uploadIdentifierForChange:(id)arg1 ;
-(void)forceScopeIndexOnAllRecordsTo:(long long)arg1 ;
-(CPLChangeBatch *)batch;
-(BOOL)isFull;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

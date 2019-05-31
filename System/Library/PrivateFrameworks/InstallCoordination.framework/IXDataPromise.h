/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, IXDataPromiseSeed, NSString, NSUUID;

@interface IXDataPromise : NSObject <NSSecureCoding> {

	BOOL _complete;
	NSError* _error;
	unsigned long long _errorSourceIdentifier;
	IXDataPromiseSeed* _seed;

}

@property (nonatomic,retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long errorSourceIdentifier;                 //@synthesize errorSourceIdentifier=_errorSourceIdentifier - In the implementation block
@property (nonatomic,retain) IXDataPromiseSeed * seed;                                 //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) Class seedClass; 
@property (assign,getter=isComplete,nonatomic) BOOL complete;                          //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) double percentComplete; 
@property (nonatomic,readonly) NSError * localError; 
@property (nonatomic,readonly) BOOL localIsComplete; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long creatorIdentifier; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long totalBytesNeededOnDisk; 
@property (nonatomic,readonly) NSError * errorOccurred; 
+(id)outstandingPromisesForCreator:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSError *)localError;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(void)setSeed:(IXDataPromiseSeed *)arg1 ;
-(void)_updateInitWithSeed:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(BOOL)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)creatorIdentifier;
-(unsigned long long)errorSourceIdentifier;
-(void)setErrorSourceIdentifier:(unsigned long long)arg1 ;
-(oneway void)_clientDelegate_didComplete;
-(oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3 ;
-(Class)seedClass;
-(void)cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)localIsComplete;
-(unsigned long long)totalBytesNeededOnDisk;
-(NSError *)errorOccurred;
-(void)cancelForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)cancelForReason:(id)arg1 error:(id*)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(double)percentComplete;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)isComplete;
-(IXDataPromiseSeed *)seed;
-(void)setPercentComplete:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSUUID *)uniqueIdentifier;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSThread, NSError, NSString;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	BOOL _forWrite;
	NSError* _error;
	NSString* _name;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(BOOL)do:(/*^block*/id)arg1 ;
-(BOOL)_forWrite;
-(id)initForWrite:(BOOL)arg1 ;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(void)_transactionDidFinish;
-(BOOL)canRead;
-(BOOL)canWrite;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end


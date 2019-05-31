/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol GSAdditionStoring
@property (retain) NSURL * documentURL; 
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@required
-(NSEnumerator*)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4;
-(void)cleanupStagingURL:(id)arg1;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
-(id)URLforReplacingItemWithError:(id*)arg1;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
-(void)setDocumentURL:(id)arg1;
-(NSURL *)documentURL;

@end

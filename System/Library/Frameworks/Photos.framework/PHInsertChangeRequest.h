/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PHChangeRequestHelper;


@protocol PHInsertChangeRequest <PHChangeRequest>
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper; 
@required
+(BOOL)canGenerateUUIDWithoutEntitlements;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(PHChangeRequestHelper *)helper;
-(BOOL)isNew;

@end

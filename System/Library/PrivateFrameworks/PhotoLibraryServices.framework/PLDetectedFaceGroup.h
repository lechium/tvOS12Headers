/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet, PLPerson, PLDetectedFace;

@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (assign,nonatomic) int unnamedFaceCount; 
@property (nonatomic,retain) PLPerson * associatedPerson; 
@property (assign,nonatomic) PLDetectedFace * keyFace; 
@property (assign,nonatomic) int personBuilderState; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)entityName;
-(void)willSave;
-(void)awakeFromInsert;
-(id)mutableDetectedFaces;
-(void)refreshFaces;
@end


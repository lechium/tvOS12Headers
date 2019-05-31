/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFMirroredRelationship.h>

@class NSRelationshipDescription, NSManagedObjectID, NSString;

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {

	NSRelationshipDescription* _relationshipDescription;
	NSRelationshipDescription* _inverseRelationshipDescription;
	NSManagedObjectID* _objectID;
	NSString* _relatedRecordName;
	NSString* _recordName;

}

@property (nonatomic,readonly) NSRelationshipDescription * relationshipDescription;                     //@synthesize relationshipDescription=_relationshipDescription - In the implementation block
@property (nonatomic,readonly) NSRelationshipDescription * inverseRelationshipDescription;              //@synthesize inverseRelationshipDescription=_inverseRelationshipDescription - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                                            //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSString * recordName;                                                   //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,readonly) NSString * relatedRecordName;                                            //@synthesize relatedRecordName=_relatedRecordName - In the implementation block
-(NSRelationshipDescription *)relationshipDescription;
-(NSRelationshipDescription *)inverseRelationshipDescription;
-(NSString *)relatedRecordName;
-(id)recordTypesToRecordNames;
-(id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(NSManagedObjectID *)objectID;
-(NSString *)recordName;
-(void)dealloc;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSString;

@interface PFCloudKitModelValidator : NSObject {

	NSManagedObjectModel* _model;
	NSString* _configurationName;

}
+(id)stringFromDeleteRule:(unsigned long long)arg1 ;
-(BOOL)_validateManagedObjectModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateEntities:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id*)arg4 ;
-(id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(id)init;
-(void)dealloc;
@end


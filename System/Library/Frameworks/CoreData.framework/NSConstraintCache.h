/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSEntityDescription, NSMutableDictionary, NSMutableArray;

@interface NSConstraintCache : NSObject {

	NSArray* _constraint;
	NSArray* _extension;
	NSEntityDescription* _entity;
	NSMutableDictionary* _knownValues;
	NSMutableArray* _children;

}

@property (nonatomic,retain,readonly) NSArray * constraint;               //@synthesize constraint=_constraint - In the implementation block
@property (nonatomic,retain,readonly) NSArray * extension;                //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,retain,readonly) NSArray * children;                 //@synthesize children=_children - In the implementation block
+(void)createCachesForEntity:(id)arg1 forValidator:(id)arg2 ;
-(NSArray *)constraint;
-(id)validateForSave:(id)arg1 ;
-(BOOL)_constraint:(id)arg1 extends:(id)arg2 ;
-(BOOL)_alreadyHasChildForEntity:(id)arg1 constraint:(id)arg2 ;
-(id)initForEntity:(id)arg1 constraint:(id)arg2 extension:(id)arg3 ;
-(void)_addChild:(id)arg1 ;
-(void)extendConstraint:(id)arg1 onParentEntity:(id)arg2 parentCache:(id)arg3 ;
-(id)keyForValues:(id)arg1 ;
-(void)registerObject:(id)arg1 forValues:(id)arg2 ;
-(BOOL)_intraStoreConflictsExistForValues:(id)arg1 ;
-(void)registerObject:(id)arg1 ;
-(NSEntityDescription *)entity;
-(void)dealloc;
-(id)description;
-(void)reset;
-(NSArray *)extension;
-(NSArray *)children;
@end


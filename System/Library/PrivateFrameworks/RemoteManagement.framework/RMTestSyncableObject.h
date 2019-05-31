/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>
#import <libobjc.A.dylib/RMUniquelySerializableManagedObject.h>

@class NSString, NSSet;

@interface RMTestSyncableObject : RMUniquedManagedObject <RMUniquelySerializableManagedObject>

@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSSet * subobjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)delete;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
@end


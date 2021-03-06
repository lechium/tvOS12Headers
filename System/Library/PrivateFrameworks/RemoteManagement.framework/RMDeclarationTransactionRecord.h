/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface RMDeclarationTransactionRecord : NSManagedObject

@property (nonatomic,copy) NSString * currentHash; 
@property (nonatomic,copy) NSString * previousHash; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,retain) NSString * organizationIdentifier; 
+(id)fetchRequestForDeclarationTransactionRecordsBelongingToOrganizationWithIdentifier:(id)arg1 ;
@end


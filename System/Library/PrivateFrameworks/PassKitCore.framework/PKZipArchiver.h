/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKZipArchiver : NSObject
+(void)noteBOMCopier:(BOMCopierRef)arg1 succeeded:(BOOL)arg2 ;
+(void)associateBOMCopier:(BOMCopierRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)disassociateBOMCopier:(BOMCopierRef)arg1 ;
-(void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)zippedDataForURL:(id)arg1 ;
@end


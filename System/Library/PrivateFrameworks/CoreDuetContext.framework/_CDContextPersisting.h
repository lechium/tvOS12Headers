/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDContextPersisting
@required
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2;
-(void)saveRegistration:(id)arg1;
-(void)deleteRegistration:(id)arg1;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteDataCreatedBefore:(id)arg1;
-(void)deleteAllData;

@end

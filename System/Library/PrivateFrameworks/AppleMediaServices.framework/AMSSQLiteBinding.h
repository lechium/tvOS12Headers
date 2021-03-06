/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSSQLiteBinding <NSObject>
@required
-(int)clearBindings;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2;
-(void)bindInt:(int)arg1 atPosition:(int)arg2;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2;
-(void)bindNullAtPosition:(int)arg1;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2;
-(void)bindData:(id)arg1 atPosition:(int)arg2;
-(void)bindString:(id)arg1 atPosition:(int)arg2;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
-(void)bindArray:(id)arg1 atPosition:(int)arg2;
-(void)bindDate:(id)arg1 atPosition:(int)arg2;
-(void)bindDictionary:(id)arg1 atPosition:(int)arg2;
-(void)bindURL:(id)arg1 atPosition:(int)arg2;

@end


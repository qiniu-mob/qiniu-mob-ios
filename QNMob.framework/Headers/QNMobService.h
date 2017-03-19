//
//  QNMobService.h
//  QNMob
//
//  Created by 何昊宇 on 17/3/3.
//  Copyright © 2017年 Aaron. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QNMob.h"

NS_ASSUME_NONNULL_BEGIN

@interface QNMob : NSObject

+ (instancetype) defaultQNMob;

- (void)createFolder:(QNMobCreateFolderRequest *)request completionHandler:(void (^ _Nullable)(QNMobCreateFolderOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobCreateFolderRequest *> *)createFolder:(QNMobCreateFolderRequest *)request;

- (void)headFolder:(QNMobHeadFolderRequest *)request completionHandler:(void (^ _Nullable)(QNMobHeadFolderOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobHeadFolderRequest *> *)headFolder:(QNMobHeadFolderRequest *)request;

- (void)getMobFolder:(QNMobGetFolderRequest *)request completionHandler:(void (^ _Nullable)(QNMobGetFolderOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobGetFolderRequest *> *)getMobFolder:(QNMobGetFolderRequest *)request;

- (void)updateFolder:(QNMobUpdateFolderRequest *)request completionHandler:(void (^ _Nullable)(QNMobUpdateFolderOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobUpdateFolderRequest *> *)updateFolder:(QNMobUpdateFolderRequest *)request;

- (void)deleteFolder:(QNMobDeleteFolderRequest *)request completionHandler:(void (^)(NSError *error))completionHandler;

- (AWSTask<QNMobDeleteFolderRequest *> *)deleteFolder:(QNMobDeleteFolderRequest *)request;

- (void)createFile:(QNMobCreateFileRequest *)request completionHandler:(void (^ _Nullable)(QNMobCreateFileOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobCreateFileRequest *> *)createFile:(QNMobCreateFileRequest *)request;

- (void)headFile:(QNMobHeadFileRequest *)request completionHandler:(void (^ _Nullable)(QNMobHeadFileOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobHeadFileRequest *> *)headFile:(QNMobHeadFileRequest *)request;

- (void)getFile:(QNMobGetFileRequest *)request
completionHandler:(void (^)(QNMobGetFileOutput *response, NSError *error))completionHandler;

- (AWSTask<QNMobGetFileRequest *> *)getFile:(QNMobGetFileRequest *)request;

- (void)copyFile:(QNMobCopyFileRequest *)request
completionHandler:(void (^)(QNMobCopyFileOutput *response, NSError *error))completionHandler;

- (AWSTask<QNMobCopyFileRequest *> *)copyFile:(QNMobCopyFileRequest *)request;

- (void)deleteFile:(QNMobDeleteFileRequest *)request completionHandler:(void (^)(NSError *error))completionHandler;

- (AWSTask<QNMobDeleteFileRequest *> *)deleteFile:(QNMobDeleteFileRequest *)request;

- (void)deleteFiles:(QNMobDeleteFilesRequest *)request completionHandler:(void (^ _Nullable)(QNMobDeleteFilesOutput * _Nullable response, NSError * _Nullable error))completionHandler;

- (AWSTask<QNMobDeleteFilesRequest *> *)deleteFiles:(QNMobDeleteFilesRequest *)request;

@end

NS_ASSUME_NONNULL_END

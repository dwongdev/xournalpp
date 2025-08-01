/*
 * Xournal++
 *
 * PDF Document Export Abstraction Interface
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <memory>  // for unique_ptr

#include "PdfExportBackend.h"

class Document;
class ProgressListener;
class XojPdfExport;

class XojPdfExportFactory {
private:
    XojPdfExportFactory();
    ~XojPdfExportFactory();

public:
    static std::unique_ptr<XojPdfExport> createExport(const Document* doc, ProgressListener* listener,
                                                      ExportBackend backend = ExportBackend::DEFAULT);
};

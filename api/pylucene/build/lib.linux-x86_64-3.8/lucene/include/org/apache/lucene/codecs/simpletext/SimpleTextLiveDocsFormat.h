#ifndef org_apache_lucene_codecs_simpletext_SimpleTextLiveDocsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextLiveDocsFormat_H

#include "org/apache/lucene/codecs/LiveDocsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class SegmentCommitInfo;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextLiveDocsFormat : public ::org::apache::lucene::codecs::LiveDocsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_files_b2e301d4a4757fdf,
              mid_readLiveDocs_f118005014dfdc32,
              mid_writeLiveDocs_d90adf8fed5738cb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextLiveDocsFormat(jobject obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextLiveDocsFormat(const SimpleTextLiveDocsFormat& obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {}

            SimpleTextLiveDocsFormat();

            void files(const ::org::apache::lucene::index::SegmentCommitInfo &, const ::java::util::Collection &) const;
            ::org::apache::lucene::util::Bits readLiveDocs(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::store::IOContext &) const;
            void writeLiveDocs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::store::IOContext &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextLiveDocsFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextLiveDocsFormat);

          class t_SimpleTextLiveDocsFormat {
          public:
            PyObject_HEAD
            SimpleTextLiveDocsFormat object;
            static PyObject *wrap_Object(const SimpleTextLiveDocsFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

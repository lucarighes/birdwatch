#ifndef org_apache_lucene_search_suggest_document_CompletionsTermsReader_H
#define org_apache_lucene_search_suggest_document_CompletionsTermsReader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace search {
        namespace suggest {
          namespace document {
            class NRTSuggester;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionsTermsReader : public ::java::lang::Object {
             public:
              enum {
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_suggester_05382a7351c5bba9,
                max_mid
              };

              enum {
                fid_maxWeight,
                fid_minWeight,
                fid_type,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionsTermsReader(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionsTermsReader(const CompletionsTermsReader& obj) : ::java::lang::Object(obj) {}

              jlong _get_maxWeight() const;
              jlong _get_minWeight() const;
              jbyte _get_type() const;

              ::java::util::Collection getChildResources() const;
              jlong ramBytesUsed() const;
              ::org::apache::lucene::search::suggest::document::NRTSuggester suggester() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionsTermsReader);
            extern PyTypeObject *PY_TYPE(CompletionsTermsReader);

            class t_CompletionsTermsReader {
            public:
              PyObject_HEAD
              CompletionsTermsReader object;
              static PyObject *wrap_Object(const CompletionsTermsReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

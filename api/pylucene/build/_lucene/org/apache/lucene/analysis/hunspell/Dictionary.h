#ifndef org_apache_lucene_analysis_hunspell_Dictionary_H
#define org_apache_lucene_analysis_hunspell_Dictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class DictEntries;
        }
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Dictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_06593b1664eeea00,
              mid_init$_642b82fd6f7e6738,
              mid_getIgnoreCase_8454bd5aa23fd11e,
              mid_lookupEntries_693f1402e9ab12d2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

            Dictionary(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::io::InputStream &, const ::java::io::InputStream &);
            Dictionary(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::io::InputStream &, const ::java::util::List &, jboolean);

            jboolean getIgnoreCase() const;
            ::org::apache::lucene::analysis::hunspell::DictEntries lookupEntries(const ::java::lang::String &) const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Dictionary);
          extern PyTypeObject *PY_TYPE(Dictionary);

          class t_Dictionary {
          public:
            PyObject_HEAD
            Dictionary object;
            static PyObject *wrap_Object(const Dictionary&);
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
